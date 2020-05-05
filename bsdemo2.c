#include <stdio.h>
#include <stdlib.h>

void addMoreStuff()
{
    printf( "Hellow from CMAKE: addMoreStuff()\n" );
}

void addStuff()
{
    printf( "Hellow from CMAKE: addStuff()\n" );
}

int main()
{
    printf( "Hello from the CMAKE world\n" );
    addStuff();
    addMoreStuff();
    exit( 0 );
}
