main(a,b,c,d){
    for(;~scanf("%d%d%d%d",&a,&b,&c,&d);){
        if(a<c){
            if(b<d)puts("NE");
            if(b==d)puts("E");
            if(b>d)puts("SE");
        }
        if(a==c){
            if(b<d)puts("N");
            if(b==d)puts("here");
            if(b>d)puts("S");
        }
        if(a>c){
            if(b<d)puts("NW");
            if(b==d)puts("W");
            if(b>d)puts("SW");
        }
	}
}