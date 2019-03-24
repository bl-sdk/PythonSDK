#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetParticleSysParam(py::module &m)
{
    py::class_< USeqAct_SetParticleSysParam,  USequenceAction   >(m, "USeqAct_SetParticleSysParam")
		.def_static("StaticClass", &USeqAct_SetParticleSysParam::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceParameters", &USeqAct_SetParticleSysParam::InstanceParameters)
        .def_readwrite("ScalarValue", &USeqAct_SetParticleSysParam::ScalarValue)
          ;
}