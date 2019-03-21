#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkBank(py::object m)
{
    py::class_< UAkBank,  UAkObject   >(m, "UAkBank")
        .def_readwrite("NumAsyncLoaders", &UAkBank::NumAsyncLoaders)
        .def("StaticClass", &UAkBank::StaticClass, py::return_value_policy::reference)
          ;
}