#include <iostream>

int main(){
    int num = 2;
    std::cout << num << std::endl;
    system("pause");
    return 0;
}

/*
核心 I/O 与字符串
头文件	    主要功能	        核心组件
<iostream>  标准输入输出流	    std::cin, std::cout, std::cerr, std::clog
<fstream>	文件流操作	        std::ifstream, std::ofstream, std::fstream, 成员函数 open(), close(), is_open()
<sstream>	字符串流操作	    std::istringstream, std::ostringstream, std::stringstream
<iomanip>	I/O 格式化	        std::setw, std::setprecision, std::setfill, std::hex, std::fixed
<string>	字符串类	        std::string, 成员函数如 size(), append(), substr(), find(), c_str()
STL 容器
头文件	    主要功能	        核心组件
<vector>    动态数组	        std::vector, 成员函数 push_back(), pop_back(), size(), empty(), at(), insert(), erase()
<list>	    双向链表	        std::list, 成员函数 push_front(), push_back(), sort(), merge(), splice()
<map>	    有序键值对集合      std::map, std::multimap, 成员函数 insert(), find(), count(), erase()
<set>	    有序唯一元素集合	    std::set, std::multiset, 成员函数 insert(), find(), count(), erase()
<unordered_map>	哈希表键值对集合	std::unordered_map, std::unordered_multimap
<unordered_set>	哈希表唯一元素集合	std::unordered_set, std::unordered_multiset
<array>	        固定大小数组 (C++11)	std::array
<deque>	        双端队列	      std::deque
算法与工具
头文件	     主要功能	        核心组件
<algorithm>	通用算法	std::sort, std::find, std::reverse, std::copy, std::for_each, std::max, std::min
<numeric>	数值算法	std::accumulate, std::inner_product, std::iota
<memory>	内存管理	std::unique_ptr, std::shared_ptr, std::make_unique, std::make_shared
<functional>	函数对象	std::function, std::bind, std::hash
<utility>	通用工具	std::pair, std::move, std::swap
<tuple>	元组 (C++11)	std::tuple, std::make_tuple, std::get
<iterator>	迭代器支持	std::iterator_traits, std::advance, std::next, std::prev
C 库包装器
C++ 也提供了 C 标准库的包装版本，通常在原 C 头文件名前加 c，并去掉 .h 后缀，所有符号都放在 std 命名空间中。

C++ 头文件	对应的 C 头文件	主要功能
<cstdio>	<stdio.h>	标准输入输出
<cstdlib>	<stdlib.h>	通用工具函数
<cstring>	<string.h>	字符串处理
<cmath>	<math.h>	数学函数
<cctype>	<ctype.h>	字符处理
<ctime>	<time.h>	日期和时间
<cstddef>	<stddef.h>	标准定义
<cassert>	<assert.h>	断言
*/