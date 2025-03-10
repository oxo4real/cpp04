/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:36 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 17:07:34 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain& org);
        Brain& operator=(const Brain& org);
        ~Brain(void);
        std::string getidea(int idx) const;
        void        setidea(int idx, std::string idea);
};

#endif
