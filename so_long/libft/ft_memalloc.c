/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:01:41 by pperol            #+#    #+#             */
/*   Updated: 2022/03/27 14:04:34 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void	*dst;

	dst = (void *)malloc(size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, size);
	return (dst);
}