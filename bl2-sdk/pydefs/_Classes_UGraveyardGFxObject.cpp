#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGraveyardGFxObject(py::module &m)
{
    py::class_< UGraveyardGFxObject,  UGFxObject   >(m, "UGraveyardGFxObject")
        .def("Hide", &UGraveyardGFxObject::Hide)
        .def("Show", &UGraveyardGFxObject::Show)
        .def("SetTombstoneInfo", &UGraveyardGFxObject::SetTombstoneInfo)
          ;
}