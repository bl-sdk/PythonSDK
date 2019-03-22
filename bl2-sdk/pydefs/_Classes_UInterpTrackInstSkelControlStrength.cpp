#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSkelControlStrength(py::module &m)
{
    py::class_< UInterpTrackInstSkelControlStrength,  UInterpTrackInst   >(m, "UInterpTrackInstSkelControlStrength")
        .def("StaticClass", &UInterpTrackInstSkelControlStrength::StaticClass, py::return_value_policy::reference)
          ;
}