#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureBossMusic(py::module &m)
{
    py::class_< UWillowSeqAct_ConfigureBossMusic,  USequenceAction   >(m, "UWillowSeqAct_ConfigureBossMusic")
		.def_static("StaticClass", &UWillowSeqAct_ConfigureBossMusic::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BossAkState", &UWillowSeqAct_ConfigureBossMusic::BossAkState)
          ;
}