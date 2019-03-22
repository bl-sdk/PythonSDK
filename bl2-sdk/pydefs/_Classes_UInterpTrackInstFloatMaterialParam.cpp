#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatMaterialParam(py::module &m)
{
    py::class_< UInterpTrackInstFloatMaterialParam,  UInterpTrackInst   >(m, "UInterpTrackInstFloatMaterialParam")
        .def_readwrite("MICInfos", &UInterpTrackInstFloatMaterialParam::MICInfos)
        .def_readwrite("InstancedTrack", &UInterpTrackInstFloatMaterialParam::InstancedTrack)
          ;
}