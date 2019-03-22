#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackColorProp(py::module &m)
{
    py::class_< UInterpTrackColorProp,  UInterpTrackVectorBase   >(m, "UInterpTrackColorProp")
        .def_readwrite("PropertyName", &UInterpTrackColorProp::PropertyName)
          ;
}