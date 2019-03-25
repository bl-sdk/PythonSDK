#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FString(py::module &m)
{
	py::class_< FString >(m, "FString")
		.def(py::init< wchar_t* >())
		.def(py::init< const FString& >())
		.def_readwrite("Count", &TArray<wchar_t>::Count)
		.def_readwrite("Max", &TArray<wchar_t>::Max)
		.def("Num", &TArray<wchar_t>::Num)
		;

}