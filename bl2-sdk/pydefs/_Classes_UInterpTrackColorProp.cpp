#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackColorProp(py::module &m)
{
    py::class_< UInterpTrackColorProp,  UInterpTrackVectorBase   >(m, "UInterpTrackColorProp")
		.def_static("StaticClass", &UInterpTrackColorProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyName", &UInterpTrackColorProp::PropertyName)
          ;
}