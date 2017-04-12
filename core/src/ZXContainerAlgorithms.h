#pragma once
/*
* Copyright 2017 Axel Waggershauser
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <algorithm>
#include <numeric>

namespace ZXing {

template <typename Container, typename Value>
auto Find(const Container& c, const Value& v) -> decltype(std::begin(c)) {
    return std::find(std::begin(c), std::end(c), v);
}

template <typename Container, typename Value>
bool Contains(const Container& c, const Value& v) {
    return std::find(std::begin(c), std::end(c), v) != std::end(c);
}

template <typename Container, typename Value>
Value Accumulate(const Container& c, Value v = Value(0)) {
    return std::accumulate(std::begin(c), std::end(c), v);
}

template <typename T, typename S = int>
constexpr S Length(const T&) {
	return static_cast<S>(std::extent<T>::value);
}

} // ZXing
