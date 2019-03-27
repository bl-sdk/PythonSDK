#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSimpleAnimStateData(py::module &m)
{
    py::class_< FSimpleAnimStateData >(m, "FSimpleAnimStateData")
        .def_readwrite("AnimState", &FSimpleAnimStateData::AnimState)
  ;
}