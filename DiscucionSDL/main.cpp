#include <cstdlib>
#include<SDL\SDL.h>

using namespace std;
class ventana{
private:
    SDL_window *window;
public:
    ventana();
    void IniciarVentana(); 
};
ventana::ventana(){
    SDL_Init(SDL_INIT_VIDEO);
    *window=NULL;
}
void ventana::IniciarVentana(){
    bool isRunning=true
    this->window=SDL_CreateWindow("titulo",SDL_WINDPOS_CENTERED,WINDPOS_CENTERED,600,600,SDL_WINDOW_SHOWN);
    //SDL_Delay(2000);
    //SDL_DestroyWindow(this->window);
    //SDL_Quit();
    SDL_Event evt;
    while(isRunning){
        while(SDL_PollEvent(&evt)!=0){
            if (evt.type==SDL_QUIT){
                isRunnig=false;
            }
        }
    }
    SDL_DestroyWindow(this->window);
    SDL_QUIT();
}
/* PONER IMAGEN
 * SDL_Surface *windowSurface=NULL;
 * SDL_Surface *image=NULL;
 * -------crear ventana--------
 * windowSurface=SDL_GetWindowSurface(this->window);
 * image=SDL_loadBMP("imagen.bmp);
 * SDL_Rect pos; pos.x=100; pos.y=0
 * SDL_BlitSurface(image,NULL;windowSurface,&pos);
 * SDL_UpdateWindowSurface(this->window);
 */
/*PARA UN ARREGLO
 * for(int i=0,i<4;i++){
 *  if(m[1]=='p'){
 *      p.x=1*50
 * SDL_BlitSurface(image p,NULL,windowsuface,&pos);
 * else
 *  if(m[i]=='s'{
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

