#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeScalePlayRate(py::module &m)
{
    py::class_< UAnimNodeScalePlayRate,  UAnimNodeBlendBase   >(m, "UAnimNodeScalePlayRate")
		.def_static("StaticClass", &UAnimNodeScalePlayRate::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ScaleByValue", &UAnimNodeScalePlayRate::ScaleByValue)
          ;
}