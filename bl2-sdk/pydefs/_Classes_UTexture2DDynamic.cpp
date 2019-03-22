#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTexture2DDynamic(py::module &m)
{
    py::class_< UTexture2DDynamic,  UTexture   >(m, "UTexture2DDynamic")
        .def_readwrite("SizeX", &UTexture2DDynamic::SizeX)
        .def_readwrite("SizeY", &UTexture2DDynamic::SizeY)
        .def_readwrite("Format", &UTexture2DDynamic::Format)
        .def_readwrite("NumMips", &UTexture2DDynamic::NumMips)
        .def("StaticClass", &UTexture2DDynamic::StaticClass, py::return_value_policy::reference)
        .def("Create", &UTexture2DDynamic::Create, py::return_value_policy::reference)
        .def("Init", &UTexture2DDynamic::Init)
          ;
}