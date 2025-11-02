/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xx <xx@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:23:57 by xx                #+#    #+#             */
/*   Updated: 2025/10/18 16:25:39 by xx               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j]; j++)
            argv[i][j] = std::toupper(argv[i][j]);
        std::cout << argv[i];
    }

    std::cout << std::endl;
    return 0;
}
