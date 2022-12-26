#include "stable_diffusion.hpp"
#include <string>

int main()
{
    std::string positive_prompt = "arms behind back";

    std::string negative_prompt = "";

    for ( int seed = 1; seed < 100; ++seed )
    {
        std::string output_png_path = std::string{"./result_"} + std::to_string( seed ) + std::string{".png"};
        //sd( positive_prompt, output_png_path, negative_prompt, 30, seed );
        stable_diffusion( positive_prompt, output_png_path, 20, seed, negative_prompt );
    }

    return 0;
}

