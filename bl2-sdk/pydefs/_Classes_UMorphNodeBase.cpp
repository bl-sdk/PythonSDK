#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeBase(py::object m)
{
    py::class_< UMorphNodeBase,  UAnimObject   >(m, "UMorphNodeBase")
        .def_readwrite("NodeName", &UMorphNodeBase::NodeName)
        .def("StaticClass", &UMorphNodeBase::StaticClass, py::return_value_policy::reference)
          ;
}