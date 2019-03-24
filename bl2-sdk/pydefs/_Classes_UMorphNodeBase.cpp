#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeBase(py::module &m)
{
    py::class_< UMorphNodeBase,  UAnimObject   >(m, "UMorphNodeBase")
		.def_static("StaticClass", &UMorphNodeBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NodeName", &UMorphNodeBase::NodeName)
          ;
}