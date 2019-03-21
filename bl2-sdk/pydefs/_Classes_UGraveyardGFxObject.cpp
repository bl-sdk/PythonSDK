#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGraveyardGFxObject()
{
    py::class_< UGraveyardGFxObject,  UGFxObject   >("UGraveyardGFxObject")
        .def("StaticClass", &UGraveyardGFxObject::StaticClass, py::return_value_policy::reference)
        .def("Hide", &UGraveyardGFxObject::Hide)
        .def("Show", &UGraveyardGFxObject::Show)
        .def("SetTombstoneInfo", &UGraveyardGFxObject::SetTombstoneInfo)
        .staticmethod("StaticClass")
  ;
}