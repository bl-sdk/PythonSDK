#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackDirector(py::module &m)
{
    py::class_< UInterpTrackDirector,  UInterpTrack   >(m, "UInterpTrackDirector")
        .def_readwrite("CutTrack", &UInterpTrackDirector::CutTrack)
          ;
}