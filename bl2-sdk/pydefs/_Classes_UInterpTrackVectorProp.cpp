#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorProp(py::module &m)
{
    py::class_< UInterpTrackVectorProp,  UInterpTrackVectorBase   >(m, "UInterpTrackVectorProp")
		.def_static("StaticClass", &UInterpTrackVectorProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyName", &UInterpTrackVectorProp::PropertyName)
          ;
}