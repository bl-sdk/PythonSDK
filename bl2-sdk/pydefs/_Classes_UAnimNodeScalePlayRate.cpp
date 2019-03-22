#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeScalePlayRate(py::module &m)
{
    py::class_< UAnimNodeScalePlayRate,  UAnimNodeBlendBase   >(m, "UAnimNodeScalePlayRate")
        .def_readwrite("ScaleByValue", &UAnimNodeScalePlayRate::ScaleByValue)
          ;
}