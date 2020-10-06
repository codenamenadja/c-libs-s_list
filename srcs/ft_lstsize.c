/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:34:33 by jihhan            #+#    #+#             */
/*   Updated: 2020/10/06 11:03:06 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_list.h"

int                 ft_lstsize(t_list *lst)
{
    int     len;
    t_list  *lst_pt;
 
    if (!lst || (!(lst->content) && !(lst->next)))
        return (0);

    len = 0;
    lst_pt = lst; 

    while (lst_pt)
    {
        lst_pt = lst_pt->next;
        len++;
    }

    return (len);
}
