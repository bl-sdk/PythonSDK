#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlScale(py::module &m)
{
    py::class_< UInterpTrackSkelControlScale,  UInterpTrackFloatBase   >(m, "UInterpTrackSkelControlScale")
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlScale::SkelControlName)
          ;
}