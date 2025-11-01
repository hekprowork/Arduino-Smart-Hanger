
const static byte sdCard[2][2][3][8] PROGMEM = {
    {//第一幀
        {//第一行
            {
             0b00000,
             0b00111,
             0b01000,
             0b01000,
             0b01000,
             0b01000,
             0b01000,
             0b00111
            },
            {
             0b00000,
             0b11111,
             0b00000,
             0b00100,
             0b01110,
             0b10101,
             0b00100,
             0b10101
            },
            {
             0b00000,
             0b11100,
             0b00010,
             0b00010,
             0b00010,
             0b00010,
             0b00010,
             0b11100
            }
        },
        {//第二行
            {
             0b00000,
             0b00000,
             0b00001,
             0b00010,
             0b00001,
             0b00000,
             0b00011,
             0b00000
            },
            {
             0b00100,
             0b00000,
             0b11011,
             0b00010,
             0b10010,
             0b01010,
             0b10011,
             0b00000
            },
            {
             0b00000,
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b01000,
             0b10000,
             0b00000
            }
        }
    },
    {//第二幀
        {//第一行
            {
             0b00000,
             0b00111,
             0b01000,
             0b01001,
             0b01010,
             0b01001,
             0b01000,
             0b01011
            },
            {
             0b00000,
             0b11111,
             0b00000,
             0b11011,
             0b00010,
             0b10010,
             0b01010,
             0b10011
            },
            {
             0b00000,
             0b11100,
             0b00010,
             0b10010,
             0b01010,
             0b01010,
             0b01010,
             0b10010
            }
        },
        {//第二行
            {
             0b01000,
             0b00111,
             0b00000,
             0b00001,
             0b00010,
             0b00010,
             0b00010,
             0b00001
            },
            {
             0b00000,
             0b11111,
             0b00000,
             0b10010,
             0b01010,
             0b01011,
             0b01010,
             0b10010
            },
            {
             0b00010,
             0b11100,
             0b00000,
             0b01000,
             0b10000,
             0b00000,
             0b10000,
             0b01000
            }
        }
    }
};

const static byte coatHanger[6][2][2][8] PROGMEM = {
    {//第一幀(沒衣服)
        {//第一行
            {
             0b00000,
             0b00000,
             0b00000,
             0b00001,
             0b00010,
             0b00000,
             0b00000,
             0b00011
            },
            {
             0b00000,
             0b00000,
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b10000,
             0b11000
            }
        },
        {//第二行
            {
             0b00100,
             0b01000,
             0b11111,
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b00000
            },
            {
             0b00100,
             0b00010,
             0b11111,
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b00000
            }
        }
    },
    {//第二幀(濕衣服第一張)
        {//第一行
            {
             0b00000,
             0b00001,
             0b00010,
             0b00000,
             0b00000,
             0b00011,
             0b00100,
             0b01000
            },
            {
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b10000,
             0b11000,
             0b00100,
             0b00010
            }
            
        },
        {//第二行
            {
             0b11111,
             0b00111,
             0b00111,
             0b00111,
             0b00010,
             0b00010,
             0b00000,
             0b00000
            },
            {
             0b11111,
             0b11110,
             0b11110,
             0b11110,
             0b10100,
             0b10100,
             0b00000,
             0b00000
            }
        }
    },
    {//第三幀(濕衣服第二張)
        {//第一行
            {
             0b00000,
             0b00001,
             0b00010,
             0b00000,
             0b00000,
             0b00011,
             0b00100,
             0b01000
            },
            {
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b10000,
             0b11000,
             0b00100,
             0b00010
            },
        },
        {//第二行
            {
             0b11111,
             0b00111,
             0b00111,
             0b00111,
             0b00000,
             0b00010,
             0b00010,
             0b00000
            },
            {
             0b11111,
             0b11110,
             0b11110,
             0b11110,
             0b00000,
             0b10100,
             0b10100,
             0b00000
            }
        }
    },
    {//第四幀(濕衣服第三張)
        {//第一行
            {
             0b00000,
             0b00001,
             0b00010,
             0b00000,
             0b00000,
             0b00011,
             0b00100,
             0b01000
            },
            {
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b10000,
             0b11000,
             0b00100,
             0b00010
            }
            
        },
        {//第二行
            {
             0b11111,
             0b00111,
             0b00111,
             0b00111,
             0b00000,
             0b00000,
             0b00010,
             0b00010
            },
            {
             0b11111,
             0b11110,
             0b11110,
             0b11110,
             0b00000,
             0b00000,
             0b10100,
             0b10100
            }
        }
    },
    {//第五幀(衣服乾了第一張)
        {//第一行
            {
             0b00000,
             0b00001,
             0b00010,
             0b00000,
             0b00000,
             0b00011,
             0b00100,
             0b01000
            },
            {
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b10000,
             0b11000,
             0b00100,
             0b00010
            },
            
        },
        {//第二行
            {
             0b11111,
             0b00111,
             0b00111,
             0b00111,
             0b00110,
             0b00000,
             0b00000,
             0b00000
            },
            {
             0b11111,
             0b11110,
             0b11110,
             0b11110,
             0b01100,
             0b00000,
             0b00000,
             0b00000
            }
        }
    },
    {//第六幀(衣服乾了第二張)
        {//第一行
            {
             0b00000,
             0b00001,
             0b00010,
             0b00000,
             0b00000,
             0b00011,
             0b00100,
             0b01000
            },
            {
             0b00000,
             0b10000,
             0b01000,
             0b01000,
             0b10000,
             0b11000,
             0b00100,
             0b00010
            },
            
        },
        {//第二行
            {
             0b11111,
             0b00111,
             0b00111,
             0b00111,
             0b00100,
             0b00000,
             0b00000,
             0b00000
            },
            {
             0b11111,
             0b11110,
             0b11110,
             0b11110,
             0b11001,
             0b00000,
             0b00000,
             0b00000
            }
        }
    }
};

const static byte emoji[6][2][2][8] PROGMEM = {
    {
      {//第一行
          {
          0b00000,
          0b00000,
          0b00000,
          0b00000,
          0b01110,
          0b00000,
          0b00000,
          0b00000
          },
          {
          0b00000,
          0b00000,
          0b00000,
          0b00000,
          0b01110,
          0b00000,
          0b00000,
          0b00000
          }
      },
      {//第二行
          {
          0b00000,
          0b00000,
          0b00111,
          0b00000,
          0b00000,
          0b00000,
          0b00000,
          0b00000
          },
          {
          0b00000,
          0b00000,
          0b11100,
          0b00000,
          0b00000,
          0b00000,
          0b00000,
          0b00000
          }
      },
    },
    {//第一幀
        {//第一行
            {
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b00100,
             0b01000,
             0b10000,
             0b00000
            },
            {
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b01000,
             0b00100,
             0b00010,
             0b00000
            }
        },
        {//第二行
            {
             0b00000,
             0b00001,
             0b00010,
             0b00100,
             0b00000,
             0b00000,
             0b00000,
             0b00000
            },
            {
             0b00000,
             0b00000,
             0b10000,
             0b01000,
             0b00000,
             0b00000,
             0b00000,
             0b00000
            }
        }
    },
    {//第二幀
        {//第一行
            {
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b00100,
             0b01000,
             0b10000,
             0b00000
            },
            {
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b01000,
             0b00100,
             0b00010,
             0b00000
            }
        },
        {//第二行
            {
             0b10000,
             0b10001,
             0b00010,
             0b10100,
             0b10000,
             0b00000,
             0b00000,
             0b00000
            },
            {
             0b00010,
             0b00010,
             0b10000,
             0b01000,
             0b00000,
             0b00000,
             0b00000,
             0b00000
            }
        }
    },
    {//第三幀
        {//第一行
            {
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b00100,
             0b01000,
             0b10000,
             0b00000
            },
            {
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b01000,
             0b00100,
             0b00010,
             0b00000
            }
        },
        {//第二行
            {
             0b10000,
             0b10001,
             0b00010,
             0b00100,
             0b10000,
             0b10000,
             0b00000,
             0b00000
            },
            {
             0b00000,
             0b00000,
             0b10001,
             0b01001,
             0b00000,
             0b00001,
             0b00001,
             0b00000
            }
        }
    },
    {//第一幀(笑第一張)
        {//第一行
            {
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b01100,
            	0b10010,
            	0b00000,
            	0b00000
            },
            {
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00110,
            	0b01001,
            	0b00000,
            	0b00000
            }
        },
        {//第二行
            {
            	0b00000,
            	0b00100,
            	0b00010,
            	0b00001,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000
            },
            {
            	0b00000,
            	0b00100,
            	0b01000,
            	0b10000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000
            }
        }
    },
    {//第二幀(笑第二張)
        {//第一行
            {
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b01100,
            	0b10010,
            	0b00000,
            	0b00000
            },
            {
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00110,
            	0b01001,
            	0b00000,
            	0b00000,
            	0b00000
            }
            
        },
        {//第二行
            {
            	0b00000,
            	0b00100,
            	0b00010,
            	0b00001,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000
            },
            {
            	0b00000,
            	0b00100,
            	0b01000,
            	0b10000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000
            }
        }
    },
};

const static byte treeAnimation[6][2][2][8] PROGMEM = {
    {//第一幀(冬天/枯樹)
        {//第一行
            {
                0b00000,
                0b00000,
                0b00001,
                0b00011,
                0b00111,
                0b00001,
                0b00001,
                0b00001
            },
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00100,
                0b00000,
                0b00000,
                0b00000
            }
        },
        {//第二行
            {
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
                0b01111,
                0b01111
            },
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00100,
                0b00100
            }
        }
    },
    {//第二幀(春天/靜止)
        {//第一行
            {
                0b00000,
                0b00110,
                0b01111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b01111
            },
            {
                0b00000,
                0b00000,
                0b00000,
                0b10000,
                0b11000,
                0b11100,
                0b11000,
                0b10000
            }
        },
        {//第二行
            {
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
                0b01111,
                0b01111
            },
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00100,
                0b00100
            }
        }
    },
    {//第三幀(春天/風吹)
        {//第一行
            {
                0b00000,
                0b00011,
                0b00111,
                0b01111,
                0b11111,
                0b11111,
                0b11111,
                0b01111
            },
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b10000,
                0b11000,
                0b11100,
                0b11000
            }
        },
        {//第二行
            {
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
                0b01111,
                0b01111
            },
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00100,
                0b00100
            }
        }
    },
    {//第四幀(夏天/靜止)
        {//第一行
            {
                0b00111,
                0b01111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111
            },
            {
                0b11000,
                0b11100,
                0b11110,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111
            }
        },
        {//第二行
            {
                0b01111,
                0b00111,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
                0b01111,
                0b01111
            },
            {
                0b11100,
                0b11000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00100,
                0b00100
            }
        }
    },
    {//第五幀(夏天/風吹-弱)
        {//第一行
            {
                0b00111,
                0b01111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111
            },
            {
                0b11000,
                0b11100,
                0b11110,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111
            }
        },
        {//第二行
            {
                0b01111,
                0b00111,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
                0b01111,
                0b01111
            },
            {
                0b11100,
                0b11000,
                0b00100,
                0b00000,
                0b00000,
                0b00000,
                0b00100,
                0b00100
            }
        }
    },
    {//第六幀(夏天/風吹-強)
        {//第一行
            {
                0b00011,
                0b00111,
                0b01111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111
            },
            {
                0b11100,
                0b11110,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111,
                0b11111
            }
        },
        {//第二行
            {
                0b11111,
                0b01111,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
                0b01111,
                0b01111
            },
            {
                0b11110,
                0b11100,
                0b00000,
                0b00100,
                0b00000,
                0b00000,
                0b00100,
                0b00100
            }
        }
    }
};

const static byte raining[3][2][3][8] PROGMEM = {
    {//第一幀
        {//第一行
            {
             0b00000,
             0b00001,
             0b00110,
             0b01000,
             0b01000,
             0b10000,
             0b10000,
             0b01000
            },
            {
             0b00000,
             0b10011,
             0b01100,
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b10000
            },
            {
             0b00000,
             0b00000,
             0b11000,
             0b00100,
             0b00100,
             0b00010,
             0b00010,
             0b00100
            }
        },
        {//第二行
            {
             0b01001,
             0b00110,
             0b00000,
             0b00010,
             0b00110,
             0b00100,
             0b00000,
             0b00000
            },
            {
             0b01100,
             0b00011,
             0b01000,
             0b00010,
             0b00110,
             0b00100,
             0b00000,
             0b00000
            },
            {
             0b11000,
             0b00000,
             0b00000,
             0b00010,
             0b00110,
             0b00100,
             0b00000,
             0b00000
            }
        }
    },
    {//第二幀
        {//第一行
            {
             0b00000,
             0b00001,
             0b00110,
             0b01000,
             0b01000,
             0b10000,
             0b10000,
             0b01000
            },
            {
             0b00000,
             0b10011,
             0b01100,
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b10000
            },
            {
             0b00000,
             0b00000,
             0b11000,
             0b00100,
             0b00100,
             0b00010,
             0b00010,
             0b00100
            }
        },
        {//第二行
            {
             0b01001,
             0b00110,
             0b00000,
             0b00000,
             0b00100,
             0b01100,
             0b01000,
             0b00000
            },
            {
             0b01100,
             0b00011,
             0b01000,
             0b00000,
             0b00100,
             0b01100,
             0b01000,
             0b00000
            },
            {
             0b11000,
             0b00000,
             0b00000,
             0b00000,
             0b00100,
             0b01100,
             0b01000,
             0b00000
            }
        }
    },
    {//第三幀
        {//第一行
            {
             0b00000,
             0b00001,
             0b00110,
             0b01000,
             0b01000,
             0b10000,
             0b10000,
             0b01000
            },
            {
             0b00000,
             0b10011,
             0b01100,
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b10000
            },
            {
             0b00000,
             0b00000,
             0b11000,
             0b00100,
             0b00100,
             0b00010,
             0b00010,
             0b00100
            }
        },
        {//第二行
            {
             0b01001,
             0b00110,
             0b00000,
             0b00000,
             0b00000,
             0b01000,
             0b11000,
             0b10000
            },
            {
             0b01100,
             0b00011,
             0b01000,
             0b00000,
             0b00000,
             0b01000,
             0b11000,
             0b10000
            },
            {
             0b11000,
             0b00000,
             0b00000,
             0b00000,
             0b00000,
             0b01000,
             0b11000,
             0b10000
            }
        }
    }
};

const static byte cloudy[3][2][3][8] PROGMEM = {
    {//第一幀
        {//第一行
            {
            	0b00000,
            	0b00001,
            	0b00110,
            	0b01000,
            	0b01000,
            	0b10000,
            	0b10000,
            	0b01000
            },
            {
            	0b00000,
            	0b10011,
            	0b01100,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b10000
            },
            {
            	0b00000,
            	0b00000,
            	0b11000,
            	0b00100,
            	0b00100,
            	0b00010,
            	0b00010,
            	0b00100
            }
        },
        {//第二行
            {
            	0b01001,
            	0b00110,
            	0b00000,
            	0b00010,
            	0b00110,
            	0b00100,
            	0b00000,
            	0b00000
            },
            {
            	0b01100,
            	0b00011,
            	0b01000,
            	0b10000,
            	0b11110,
            	0b00010,
            	0b00100,
            	0b00000
            },
            {
            	0b11000,
            	0b00000,
            	0b00000,
            	0b00100,
            	0b01100,
            	0b01000,
            	0b00000,
            	0b00000
            }
        }
    },
    {//第二幀
        {//第一行
            {
            	0b00000,
            	0b00001,
            	0b00110,
            	0b01000,
            	0b01000,
            	0b10000,
            	0b10000,
            	0b01000
            },
            {
            	0b00000,
            	0b10011,
            	0b01100,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b10000
            },
            {
            	0b00000,
            	0b00000,
            	0b11000,
            	0b00100,
            	0b00100,
            	0b00010,
            	0b00010,
            	0b00100
            }
        },
        {//第二行
            {
            	0b01001,
            	0b00110,
            	0b00000,
            	0b00000,
            	0b00010,
            	0b00110,
            	0b00100,
            	0b00000
            },
            {
            	0b01100,
            	0b00011,
            	0b00100,
            	0b01000,
            	0b01111,
            	0b00001,
            	0b00010,
            	0b00000
            },
            {
            	0b11000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00100,
            	0b01100,
            	0b01000,
            	0b00000
            }
        }
    },
    {//第三幀
        {//第一行
            {
            	0b00000,
            	0b00001,
            	0b00110,
            	0b01000,
            	0b01000,
            	0b10000,
            	0b10000,
            	0b01000
            },
            {
            	0b00000,
            	0b10011,
            	0b01100,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b10000
            },
            {
            	0b00000,
            	0b00000,
            	0b11000,
            	0b00100,
            	0b00100,
            	0b00010,
            	0b00010,
            	0b00100
            }
        },
        {//第二行
            {
            	0b01001,
            	0b00110,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00010,
            	0b00110,
            	0b00100
            },
            {
            	0b01100,
            	0b00011,
            	0b00000,
            	0b00100,
            	0b01000,
            	0b01111,
            	0b00001,
            	0b00010
            },
            {
            	0b11000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00000,
            	0b00100,
            	0b01100,
            	0b01000
            }
        }
    }
};

const byte logo[8] PROGMEM = {
  0b00100,
  0b10100,
  0b11111,
  0b10100,
  0b00100,
  0b01110,
  0b00100,
  0b00000
};

const byte up[8] PROGMEM = {
 0b00000,
 0b00000,
 0b00000,
 0b00000,
 0b00100,
 0b01110,
 0b11111,
 0b00000
};

const byte down[8] PROGMEM = {
 0b00000,
 0b11111,
 0b01110,
 0b00100,
 0b00000,
 0b00000,
 0b00000,
 0b00000
};

const byte arrow[8] PROGMEM = {
  0b00010,
  0b00110,
  0b01110,
  0b11110,
  0b01110,
  0b00110,
  0b00010,
  0b00000
};

const byte threePoint[8] PROGMEM = {
 0b00000,
 0b00000,
 0b00000,
 0b00000,
 0b00000,
 0b00000,
 0b10101,
 0b00000
};

const byte tick[2][8] PROGMEM = {
    {//沒有底線
     0b00000,
     0b00000,
     0b00001,
     0b00010,
     0b10100,
     0b01000,
     0b00000,
     0b00000
    },
    {//有底線
     0b00000,
     0b00000,
     0b00001,
     0b00010,
     0b10100,
     0b01000,
     0b00000,
     0b11111
    }
};

const byte cross[2][8] PROGMEM = {
  {//沒有底線
    0b00000,
    0b10001,
    0b01010,
    0b00100,
    0b01010,
    0b10001,
    0b00000,
    0b00000
  },
  {//有底線
    0b00000,
    0b10001,
    0b01010,
    0b00100,
    0b01010,
    0b10001,
    0b00000,
    0b11111
  }
};

#include <Wire.h>
#include "SdFat.h"
#include "DHT.h"
#include <LiquidCrystal_I2C.h>
#include <avr/pgmspace.h>
#define CFG_FILE "CFG.txt"   // 8.3 檔名
#define SD_CS_PIN SS

SdFat SD;
DHT dht(3, DHT11);
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

const uint8_t touchPin = 2;
bool isSDinserted = false;
uint8_t displayMode = 0 , lastDisplayMode = -1; 
/*
  -1:Error inserted SD
  0:normal 
  1:SDInsert 
  2:remindRain1 
  3:remindRain2

  4~10:setting
  4:
*/
short newDataIndex;
uint8_t isTouch = LOW , buttonDown = LOW;
const uint8_t PIN_X = A1;   // VRx
const uint8_t PIN_Y = A0;   // VRy
const uint8_t PIN_BUTTON = 5;
const uint8_t BUZZERPIN = 4;
const bool INVERT_X = false;
const bool INVERT_Y = true;
const unsigned long CALIBRATION_MS = 1000;
const unsigned long SAMPLE_PERIOD_MS = 5;
const short OUTER_THRESHOLD = 300;
const short CENTER_THRESHOLD = 120;
const uint8_t OUTSIDE_STABLE_COUNT = 2;
const uint8_t CENTER_STABLE_COUNT  = 2;
uint8_t hangerState[2] = {0};
const uint8_t stateToFrame[3] = {1 , 3 , 2};
const uint8_t stateToBeginFrame[3] = {0 , 1 , 4};
const char stateToText[3][4] = {"emp" , "wet" , "dry"};
enum Direction { DIR_NONE, DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT };
enum FlickState { ST_CENTERED, ST_MOVING };

typedef struct envData{
  short temper , humi;
  bool operator==(const envData& other) const{
    return (temper == other.temper &&
            humi == other.humi);
  }
} envDHT;
envDHT currentData;
short centerX = 512, centerY = 512;
FlickState state = ST_CENTERED;
Direction armedDir = DIR_NONE;
unsigned long lastSampleMs = 0;
uint8_t outsideCount = 0, centerCount = 0;
uint8_t cfg = 0;
uint8_t normalDisplayType = 1;

void alarmManager(uint8_t alarmType){
  static bool ringing = false;
  static unsigned long alarmShutTime;
  
  if (getItem2b(cfg , 1) || (analogRead(A3) < 600 && getItem2b(cfg , 3))) return;
  if (alarmType){
    ringing = true;
    switch (alarmType){
      case 1:
        alarmShutTime = millis() + 100UL;
        break;
      case 2:
        alarmShutTime = millis() + 1000UL;
    }
    digitalWrite(BUZZERPIN , HIGH);
  }
  if (!ringing) return;
  if (millis() >= alarmShutTime){
    digitalWrite(BUZZERPIN , LOW);
    ringing = false;
  }
}
template <typename T>
inline void iswap(T& x, T& y) { T t = x; x = y; y = t; }

template <typename T>
int partition_lomuto(T a[] , int lo , int hi){
    int i = lo;
    T pivot = a[hi];
    for (int j=lo;j<hi;j++){
        if (a[j] < pivot){
            iswap(a[i] , a[j]);
            i++;
        }
    }
    iswap(a[i] , a[hi]);
    return i;
}
// 目標函式：回傳第 k 小（k 從 1 開始），會改動 a 的內容
template <typename T>
T nth_element(T a[], short n, short k) {
    int target = k - 1;   // 轉成 0-based
    int lo = 0, hi = n - 1;
    while (lo < hi){
        int pivotIdx = partition_lomuto(a , lo , hi);
        if (pivotIdx == target) return a[pivotIdx];
        else if (target < pivotIdx) hi = pivotIdx - 1;
        else lo = pivotIdx + 1;
    }
    return a[lo];
}

void lcdCreateCharFromProgmem(uint8_t slot, const uint8_t *src8) {
  uint8_t buf[8];
  for (uint8_t i = 0; i < 8; ++i) buf[i] = pgm_read_byte(src8 + i);
  lcd.createChar(slot, buf);
}

static inline uint8_t getItem2b(uint8_t mask, uint8_t index) {
  uint8_t shift = (index & 3) * 2;
  return (mask >> shift) & 0x03;
}

static inline void setItem2b(uint8_t &mask, uint8_t index, uint8_t value) {
  // value 僅取 0..3
  uint8_t shift = (index & 3) * 2;
  uint8_t m = (uint8_t)(0x03 << shift);
  mask = (uint8_t)((mask & ~m) | ((value & 0x03) << shift));
}

//（可選）把 4 個值一次打包成 1 byte
uint8_t pack4(uint8_t v0, uint8_t v1, uint8_t v2, uint8_t v3) {
  return (uint8_t)((v0 & 3) | ((v1 & 3) << 2) | ((v2 & 3) << 4) | ((v3 & 3) << 6));
}

// 預設值（需要什麼改這裡）
uint8_t defaultMask2b() { return pack4(0,0,0,0); }

// ===================== 永久儲存（SdFat）=====================

bool saveSettingsBits(uint8_t mask, const char* path = CFG_FILE) {
  File f = SD.open(path, O_WRITE | O_CREAT | O_TRUNC);
  if (!f) { displayMode = 1; return false; }
  size_t n = f.write(&mask, 1);   // 寫原始 1 byte
  f.close();
  return n == 1;
}

bool loadSettingsBits(uint8_t &outMask, const char* path = CFG_FILE) {
  File settingFile = SD.open(CFG_FILE);

  uint8_t m = 0;
  bool ok = (settingFile.read(&m, 1) == 1);
  settingFile.close();
  if (ok) outMask = m;
  return ok;
}


Direction dominantDirFromDelta(int dx, int dy) {
  if (INVERT_X) dx = -dx;
  if (INVERT_Y) dy = -dy;

  int ax = abs(dx), ay = abs(dy);
  if (ax == 0 && ay == 0) return DIR_NONE;

  if (ax >= ay) {
    return (dx > 0) ? DIR_RIGHT : DIR_LEFT;
  } else {
    return (dy > 0) ? DIR_UP : DIR_DOWN;
  }
}
Direction readFlickOnce() {
  unsigned long now = millis();
  if (now - lastSampleMs < SAMPLE_PERIOD_MS) return DIR_NONE;
  lastSampleMs = now;

  int rawX = analogRead(PIN_X);
  int rawY = analogRead(PIN_Y);
  int dx = rawX - centerX;
  int dy = rawY - centerY;

  int ax = abs(dx);
  int ay = abs(dy);
  int maxd = (ax > ay) ? ax : ay;

  // 是否「確實在外圈」或「確實在中立」
  bool isOutside = (maxd > OUTER_THRESHOLD);
  bool isCenter  = (maxd < CENTER_THRESHOLD);

  // 連續穩定計數（抗雜訊）
  if (isOutside) { outsideCount++; } else { outsideCount = 0; }
  if (isCenter)  { centerCount++;  } else { centerCount  = 0; }

  switch (state) {
    case ST_CENTERED:
      // 還在中立，等待被推出外圈
      if (outsideCount >= OUTSIDE_STABLE_COUNT) {
        // 一旦推出外圈，鎖定當下主方向
        armedDir = dominantDirFromDelta(dx, dy);
        state = ST_MOVING;
        centerCount = 0; // 之後要等回到中心
      }
      break;

    case ST_MOVING:
      // 已經在外圈或其附近，等待確實回中
      if (centerCount >= CENTER_STABLE_COUNT) {
        // 完成「推出→回中」的一次 flick，回報方向
        Direction fire = armedDir;
        // 重置狀態
        state = ST_CENTERED;
        armedDir = DIR_NONE;
        outsideCount = centerCount = 0;
        return fire;
      }
      break;
  }

  return DIR_NONE;
}

void calibrateCenter() {
  unsigned long start = millis();
  unsigned long end = start + CALIBRATION_MS;

  
  while (millis() - start < 200) { (void)analogRead(PIN_X); (void)analogRead(PIN_Y); }

  long sumX = 0, sumY = 0;
  int samples = 0;

  while (millis() < end) {
    sumX += analogRead(PIN_X);
    sumY += analogRead(PIN_Y);
    samples++;
    delay(2);
  }

  if (samples > 0) {
    centerX = (int)(sumX / samples);
    centerY = (int)(sumY / samples);
  }
}
 

void boot(){
  lcdCreateCharFromProgmem(0, logo);
  lcd.setCursor(2, 0);
  lcd.print(F("Smart Hanger"));
  checkSDinserted();

  unsigned long logoTime = millis() + 2000UL;
  while (millis() < logoTime){;}
  logoTime += 2000UL;
  lcd.setCursor(7,1);
  lcd.write(0);
  loadSettingsBits(cfg);
  while (millis() < logoTime){;}
  logoTime += 2000UL;
  lcd.clear();
}

void printCloseIconAndText(){
  lcdCreateCharFromProgmem(7, arrow);
  lcd.setCursor(0, 1);
  lcd.write(7);
  lcd.print(F("close"));
}

void remindRain1(bool enter){
  static unsigned long nextSwitchTime;
  static bool frame = 0;
  if (enter) {
    alarmManager(1);
    lcd.clear();
    nextSwitchTime = millis();
    lcd.setCursor(4, 0);
    lcd.print(F("raining!"));
    printCloseIconAndText();
  }
  unsigned long now = millis();
  
  if (now >= nextSwitchTime) {
    nextSwitchTime += 300UL;
    for (int i=0;i<2;i++){
      for (int j=0;j<3;j++){
        lcdCreateCharFromProgmem(i*3+j , raining[frame][i][j]);
      }
    }
    for (int i=0;i<2;i++){
      lcd.setCursor(13,i);
      for (int j=0;j<3;j++){
        lcd.write(i*3+j);
      }
    }

    frame ^= 1;
  }
}

void remindRain2(bool enter){
  static unsigned long nextSwitchTime;
  static bool frame = 0;
  if (enter) {
    alarmManager(1);
    lcd.clear();
    nextSwitchTime = millis();
    lcd.setCursor(4, 0);
    lcd.print(F("raining!"));
    printCloseIconAndText();
  }
  unsigned long now = millis();
  
  if (now >= nextSwitchTime) {
    nextSwitchTime += 300UL;
    for (int i=0;i<2;i++){
      for (int j=0;j<3;j++){
        lcdCreateCharFromProgmem(i*3+j , cloudy[frame][i][j]);
      }
    }
    for (int i=0;i<2;i++){
      lcd.setCursor(13,i);
      for (int j=0;j<3;j++){
        lcd.write(i*3+j);
      }
    }

    frame ^= 1;
  }
}

void printSettingDirectSign(){
  lcdCreateCharFromProgmem(5 , up);
  lcdCreateCharFromProgmem(6 , down);
  lcd.setCursor(15 , 0);
  if (displayMode == 5)
    lcd.print(" ");
  else
    lcd.write(5);
  lcd.setCursor(12 , 1);
  lcd.print(displayMode - 4);
  lcd.print(F("/3"));
  if (displayMode == 7)
    lcd.print(" ");
  else
    lcd.write(6);
}

void settingNoti(int focus , bool firstEnter){
  if (firstEnter){
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print(F("silent "));
    printCloseIconAndText();
    printSettingDirectSign();
  }
  lcdCreateCharFromProgmem(2 , cross[focus == 0]);
  lcdCreateCharFromProgmem(3 , tick[focus == 1]);
  lcd.setCursor(9, 0);
  lcd.write(2);
  lcd.print(F(" "));
  lcd.write(3);
}

void drawSquareIcon(uint8_t pos , int index , byte icon[6][2][2][8]){
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      lcdCreateCharFromProgmem(i*2+j , icon[index][i][j]);
    }
  }
  for (int i=0;i<2;i++){
    lcd.setCursor(pos , i);
    for (int j=0;j<2;j++){
      lcd.write(i*2+j);
    }
  }
}

void settingIcon(int focus , bool firstEnter){
  static unsigned long nextAnimateTime;
  static int nextAnimateIndex;
  unsigned long now;

  if (firstEnter){
    lcd.clear();
    nextAnimateTime = millis();
    nextAnimateIndex = 0;
  }
  now = millis();

  if (now >= nextAnimateTime){
    nextAnimateTime += 1000UL;
    nextAnimateIndex = (nextAnimateIndex + 1) % 6;

    switch (focus){
      case 0:
        drawSquareIcon(1 , nextAnimateIndex , coatHanger);
        lcd.setCursor(6 , 0);
        lcd.print(F("hanger"));
        break;
      case 1:
        drawSquareIcon(1 , nextAnimateIndex , emoji);
        lcd.setCursor(6 , 0);
        lcd.print(F("face  "));
        break;
    }
    lcd.setCursor(4 , 1);
    if (nextAnimateIndex <= 0){
      lcd.print(F("Empty"));
    }else if (nextAnimateIndex <= 3){
      lcd.print(F("Wet  "));
    }else{
      lcd.print(F("Dry  "));
    }
    
  }
  printSettingDirectSign();
}

void settingNightAlarm(int focus , int firstEnter){
  if (firstEnter){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print(F("night Noti"));
    printCloseIconAndText();
    printSettingDirectSign();
  }
  lcdCreateCharFromProgmem(2 , cross[focus == 0]);
  lcdCreateCharFromProgmem(3 , tick[focus == 1]);
  lcd.setCursor(12, 0);
  lcd.write(2);
  lcd.print(F(" "));
  lcd.write(3);
}

void remindSD(bool enter){
  static unsigned long nextSwitchTime;
  static bool frame = 0;

  if (enter) {
    alarmManager(1);
    lcd.clear();
    nextSwitchTime = millis();
    lcd.setCursor(1, 0);
    lcd.print(F("insert card"));
    printCloseIconAndText();
  }
  unsigned long now = millis();
  
  if (now >= nextSwitchTime) {
    nextSwitchTime += 300UL;
    for (int i=0;i<2;i++){
      for (int j=0;j<3;j++){
        lcdCreateCharFromProgmem(i*3+j , sdCard[frame][i][j]);
      }
    }
    for (int i=0;i<2;i++){
      lcd.setCursor(13,i);
      for (int j=0;j<3;j++){
        lcd.write(i*3+j);
      }
    }

    frame ^= 1;
  }
}


void normalDisplay(bool enter){
  static unsigned long nextAnimateTime = millis();
  static uint8_t nextAnimateIndex = 0;
  if (enter){
    lcd.clear();
    nextAnimateTime = millis();
    nextAnimateIndex = 0;
  }
  unsigned long now = millis();

  if (now >= nextAnimateTime){
    nextAnimateTime += 500UL;
    uint8_t stateIndex1 = stateToBeginFrame[hangerState[0]] + nextAnimateIndex % stateToFrame[hangerState[0]];
    uint8_t stateIndex2 = stateToBeginFrame[hangerState[1]] + nextAnimateIndex % stateToFrame[hangerState[1]];
    uint8_t theme = getItem2b(cfg , 2);

    lcd.setCursor(3 , 0);
    lcd.print(stateToText[hangerState[0]]);
    lcd.setCursor(9 , 0);
    lcd.print(stateToText[hangerState[1]]);
    

    //Serial.println(theme);

    
    switch (theme){
      case 0:
        for (int i=0;i<2;i++){
          for (int j=0;j<2;j++){
            lcdCreateCharFromProgmem(i*2+j , coatHanger[stateIndex1][i][j]);
          }
        }
        for (int i=0;i<2;i++){
          for (int j=0;j<2;j++){
            lcdCreateCharFromProgmem(4 + i*2+j , coatHanger[stateIndex2][i][j]);
          }
        }
        
        break;
      case 1:
        for (int i=0;i<2;i++){
          for (int j=0;j<2;j++){
            lcdCreateCharFromProgmem(i*2+j , emoji[stateIndex1][i][j]);
          }
        }
        for (int i=0;i<2;i++){
          for (int j=0;j<2;j++){
            lcdCreateCharFromProgmem(4 + i*2+j , emoji[stateIndex2][i][j]);
          }
        }
        break;
    }
    for (int i=0;i<2;i++){
      lcd.setCursor(0 , i);
      for (int j=0;j<2;j++){
        lcd.write(i*2+j);
      }
    }
    for (int i=0;i<2;i++){
      lcd.setCursor(14 , i);
      for (int j=0;j<2;j++){
        lcd.write(4 + i*2+j);
      }
    }
    
    nextAnimateIndex = (nextAnimateIndex+1)%6;
  }

  uint8_t theme = getItem2b(cfg , 2);
  
  lcd.setCursor(3 , 1);
  lcd.print(currentData.temper);
  lcd.write(char(223));
  lcd.print("C");
  lcd.setCursor(9 , 1);
  lcd.print(currentData.humi);
  lcd.print("%");
}

void displaySDCheck(){
  lcdCreateCharFromProgmem(0 , threePoint);
  lcdCreateCharFromProgmem(0 , threePoint);
  lcd.setCursor(1,0);
  lcd.print(F("reading card"));
  lcd.write(0);
}

bool checkSDinserted(){
  isSDinserted = isSDinserted || SD.begin(SD_CS_PIN);
  return isSDinserted;
}

void openSetting(){
  if (!isSDinserted) {
    displayMode = 1;
    return;
  }

  displayMode = 4;
}

void setup(){
  pinMode(touchPin , INPUT);
  pinMode(SS, OUTPUT);
  pinMode(BUZZERPIN , OUTPUT);
  calibrateCenter();
  dht.begin();
  lcd.init();
  lcd.backlight();
  Serial.begin(115200);
  boot();
  Serial.println(getItem2b(cfg , 0));
  Serial.println(getItem2b(cfg , 1));
  Serial.println(getItem2b(cfg , 2));
  Serial.println(getItem2b(cfg , 3));
  if (!getItem2b(cfg , 0))
    openSetting();
}

void displayManager(){
  switch (displayMode){
    case 0:
      normalDisplay(displayMode != lastDisplayMode);
      break;
    case 1:
      remindSD(displayMode != lastDisplayMode);
      break;
    case 2:
      remindRain1(displayMode != lastDisplayMode);
      break;
    case 3:
      remindRain2(displayMode != lastDisplayMode);
      break;
  }
  lastDisplayMode = displayMode;
}

// 1:touch 2:button 3:isSDinserted 4:up 5:down 6:left 7:right
int userEventManager(bool userEvents[]){
  if (isTouch == LOW && digitalRead(touchPin) == HIGH){
    isTouch = HIGH;
    userEvents[1] = true;
  }else if (isTouch == HIGH && digitalRead(touchPin) == LOW){
    isTouch = LOW;
  }

  if (buttonDown == LOW && digitalRead(PIN_BUTTON) == HIGH){
    buttonDown = HIGH;
    userEvents[2] = true;
  }else if (buttonDown == HIGH && digitalRead(PIN_BUTTON) == LOW){
    buttonDown = LOW;
  }
  userEvents[3] = isSDinserted;

  //搖桿
  Direction d = readFlickOnce();
  if (d != DIR_NONE){
    switch (d) {
      case DIR_UP:
        userEvents[4] = true;
        break;
      case DIR_DOWN:
        userEvents[5] = true;
        break;
      case DIR_LEFT:
        userEvents[6] = true;
        break;
      case DIR_RIGHT:
        userEvents[7] = true;
        break;
      default: break;
    }
  }
  return;
}

int getMoistState(){
  int humi = currentData.humi;
  if (humi < 80) return 0;
  if (humi < 90) return 1;
  return 2;
}

void getNewData() {
  if (newDataIndex >= 19){
    newDataIndex = 20;
    return;
  }
  newDataIndex++;
  currentData.temper = dht.readTemperature();
  currentData.humi = dht.readHumidity();
}


void hangDataInit(uint8_t i , short a[2][30] , short b[2][50] , short aIndex[2] , short bIndex[2] , bool fifty[2]){
  for (int j=0;j<30;j++){
    a[i][j] = 0;
    b[i][j] = 0;
  }
  for (int j=30;j<50;j++){
    b[i][j] = 0;
  }
  aIndex[i] = 0;
  bIndex[i] = 0;
  fifty[i] = false;
}

void manageWeight(){
  static short tempWeights[2][30] = {0};
  static short permWeights[2][50] = {0};
  static short tempWeightsIndex[2] = {0 , 0};
  static short permWeightsIndex[2] = {0 , 0};
  static bool fifty[2] = {false , false};
  short weight[2] = {analogRead(A2) , analogRead(A6)};
  Serial.println(weight[0]);
  short EMPTY_THRE = 100;
  for (int i=0;i<2;i++){

    switch (hangerState[i]){
      case 0:
        if (weight[i] <= EMPTY_THRE) continue;
        if (weight[i] > EMPTY_THRE) {
          hangDataInit(i , tempWeights , permWeights , tempWeightsIndex , permWeightsIndex , fifty);
          hangerState[i] = 1;
          tempWeights[i][0] = weight[i];
          continue;
        }
        break;
      case 1:
        //儲存進短期資料
        tempWeightsIndex[i]++;
        tempWeights[i][tempWeightsIndex[i]] = weight[i];
      
        //儲存進長久資料
        if (tempWeightsIndex[i] >= 29){
          tempWeightsIndex[i] = 0;
          permWeights[i][permWeightsIndex[i]] = nth_element(tempWeights[i] , 30 , 15);
          //Serial.println(permWeights[i][permWeightsIndex[i]]);
          if (permWeights[i][permWeightsIndex[i]] < EMPTY_THRE){
            hangerState[i] = 0;
            continue;
          }
          permWeightsIndex[i] = (permWeightsIndex[i]+1)%50;
          if (!fifty[i] && permWeightsIndex[i] == 49) fifty[i] = true;
        }

        //計算滾動標準差並判斷是否乾
        if (fifty[i]){
          int sum = 0 , diffSquareSum = 0;
          short avg;
          
          for (int j=0;j<50;j++){
            sum += permWeights[i][j];
          }
          avg = sum / 50;
          
          for (int j=0;j<50;j++){
            short diff = permWeights[i][j] - avg;
            diffSquareSum += diff*diff;
          }
          
          if (diffSquareSum < 7) {
            hangerState[i] = 2;
            alarmManager(2);
          }
        }
        break;
      case 2:
        if (weight[i] < EMPTY_THRE) hangerState[i] = 0;
        break;
    }
  } 
}

void circularRunner(){
  static unsigned long nextRainRemindTime = millis();
  static unsigned long nextMeasureEnvTime = millis();
  static unsigned long nextMeasureWeightTime = millis();
  static unsigned long nextCheckSDTime = millis();
  static unsigned long nextMeasureCycleTime = millis();
  unsigned long now = millis();
  
  if (now >= nextMeasureEnvTime){
    nextMeasureEnvTime += 1000UL;
    getNewData();
  }

  if (now >= nextMeasureWeightTime){
    nextMeasureWeightTime += 100UL;
    manageWeight();
  }

  if (now >= nextRainRemindTime && displayMode < 4){
    nextRainRemindTime += 5000UL;
    switch (getMoistState()){
      case 1:
        displayMode = 2;
        break;
      case 2:
        displayMode = 3;
        break;
    }
  }

  if (now >= nextCheckSDTime){
    nextCheckSDTime += 300UL;
    checkSDinserted();
  }
}

void settingDirect(int focus , bool firstEnter){
  switch (displayMode){
    case 5:
      settingNoti(focus , firstEnter);
      break;
    case 6:
      settingIcon(focus , firstEnter);
      break;
    case 7:
      settingNightAlarm(focus , firstEnter);
  }
}


bool saveSettingToSD(int option[3]){
  setItem2b(cfg, 0, 1);
  for (int i=1;i<=3;i++){
    setItem2b(cfg, i, option[i-1]);
  }
  if (!saveSettingsBits(cfg)){
    return false;
  }
  return true;
}

//type 1:設定完成 2:衣服晾乾



// false 代表需要 osManager 處理
// true 代表自行處理
bool settingManager(bool userEvents[]){
  static int option[3] = {getItem2b(cfg , 1) , getItem2b(cfg , 2) , getItem2b(cfg , 3)};
  bool firstEnter = false;
  if (displayMode == 4){
    displayMode = 5;
    firstEnter = true;
    settingDirect(option[0] , firstEnter);
    return true;
  }

  if (displayMode == 8){
    //alarmManager(1);
    if (saveSettingToSD(option)){
      displayMode = 0;
      
      return false;
    }else {
      displayMode = 1;
      return false;
    }
    
  }

  if (userEvents[1]) {
    displayMode = 0;
    return true;
  }

  //若使用者沒動作則不處理，也不傳回 osManager
  if (!(userEvents[2] || userEvents[4] || userEvents[5] || userEvents[6] || userEvents[7])){
    if (displayMode == 6) settingDirect(option[1] , firstEnter);
    return true;
  }

  //使用者切換選項
  int optionIndex = displayMode - 5;
  if (userEvents[6]) option[optionIndex] = (2+option[optionIndex]-1)%2;
  else if (userEvents[7]) option[optionIndex] = (option[optionIndex]+1)%2;

  //使用者切換設定項目
  if ((userEvents[2] || userEvents[5]) && displayMode < 7){
    displayMode += 1;
    firstEnter = true;
  }else if (userEvents[4] && displayMode > 5){
    displayMode -= 1;
    firstEnter = true;
  }else if (userEvents[2] && displayMode == 7){
    displayMode = 8;
  }
  optionIndex = displayMode - 5;
  settingDirect(option[optionIndex] , firstEnter);
  return true;
}

void osManager(){
  bool userEvents[10] = {0};
  userEventManager(userEvents);

  if (displayMode >= 4 && settingManager(userEvents)) return;

  if ((userEvents[1] || userEvents[2]) && 1 <= displayMode && displayMode <= 3){
    displayMode = 0;
  }else if (userEvents[3] && displayMode == 1){
    displayMode = 0;
  }else if ((userEvents[1] || userEvents[2]) && displayMode == 0){
    openSetting();
  }
  alarmManager(0);
  circularRunner();
  displayManager();
}


void loop(){
  osManager();
}
