#include "genesis.h"
const u8 wood_tex[1024] = {170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 85, 68, 153, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 153, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 255, 255, 85, 68, 68, 68, 68, 68, 68, 153, 68, 170, 255, 255, 85, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 85, 170, 170, 
170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 238, 68, 68, 170, 255, 255, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 153, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 153, 68, 170, 255, 255, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 170, 85, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 238, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 238, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 85, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 153, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 255, 255, 170, 68, 238, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 153, 68, 68, 170, 255, 255, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 170, 170, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 238, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 
170, 255, 255, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 255, 255, 170, 170, 255, 255, 170, 68, 68, 68, 68, 68, 238, 68, 68, 170, 255, 255, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 
170, 170, 85, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 170, 170, 85, 170, 238, 238, 238, 238, 238, 238, 238, 238, 170, 170, 170, 170, 
170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 170, 170, 170, 170, 170, 170, 68, 68, 68, 68, 68, 68, 68, 68, 170, 170, 85, 170, 
};

const u8 wood_tex_light[1024] = {85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 153, 68, 68, 85, 170, 170, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 153, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 153, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 170, 170, 85, 68, 153, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 
85, 170, 170, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 170, 170, 85, 85, 170, 170, 85, 68, 68, 68, 68, 68, 153, 68, 68, 85, 170, 170, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 85, 85, 85, 85, 153, 153, 153, 153, 153, 153, 153, 153, 85, 85, 85, 85, 
85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 85, 85, 85, 85, 68, 68, 68, 68, 68, 68, 68, 68, 85, 85, 85, 85, 
};

const u8 wood_tex_dark[1024] = {255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 170, 153, 204, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 204, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 170, 153, 153, 153, 153, 153, 153, 204, 153, 255, 255, 255, 170, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 170, 255, 255, 
255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 238, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 204, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 204, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 170, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 238, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 238, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 170, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 204, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 238, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 204, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 238, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 238, 153, 153, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 
255, 255, 170, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 255, 255, 170, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 255, 255, 255, 
255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 170, 255, 
};
