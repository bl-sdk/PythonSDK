#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSound(py::module &m)
{
    py::class_< UInterpTrackSound,  UInterpTrackVectorBase   >(m, "UInterpTrackSound")
        .def_readwrite("Sounds", &UInterpTrackSound::Sounds)
          ;
}