/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:02:57 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/18 16:02:58 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
	char *raw = new char[sizeof(int) + sizeof(int) + ptr->strValue.size() + sizeof(float)];

	*(reinterpret_cast<int *>(raw)) = ptr->iValue;
	*(reinterpret_cast<int *>(raw + sizeof(int))) = *(ptr->iPtrVal);
	*(reinterpret_cast<std::string *>(raw + sizeof(int) + sizeof(int))) = ptr->strValue;
	*(reinterpret_cast<float *>(raw + sizeof(int) + sizeof(int) + ptr->strValue.size() + 1)) = ptr->fValue;

	return (reinterpret_cast<uintptr_t>(raw));
}

Data* deserialize(uintptr_t raw) {
	Data *deserial = new Data;
	deserial->iPtrVal = new int;
	char *ptr = reinterpret_cast<char *>(raw);

	deserial->iValue = *reinterpret_cast<int *>(ptr);
	*(deserial->iPtrVal) = *reinterpret_cast<int *>(ptr + sizeof(int));
	deserial->strValue = *reinterpret_cast<std::string *>(ptr + sizeof(int) + sizeof(int));
	deserial->fValue = *reinterpret_cast<float *>(ptr + sizeof(int) + sizeof(int) + deserial->strValue.size() + 1);
	return (deserial);
}
