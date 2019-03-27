#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimObject(py::module &m)
{
    py::class_< UAnimObject,  UObject   >(m, "UAnimObject")
		.def_static("StaticClass", &UAnimObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkelComponent", &UAnimObject::SkelComponent)
          ;
}