/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:16 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:17 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(const Brain& org);
        Brain& operator=(const Brain& org);
        ~Brain(void);
};

#endif
