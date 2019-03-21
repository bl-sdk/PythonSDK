#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_WaitForLevelsVisible(py::object m)
{
    py::class_< USeqAct_WaitForLevelsVisible,  USeqAct_Latent   >(m, "USeqAct_WaitForLevelsVisible")
        .def_readwrite("LevelNames", &USeqAct_WaitForLevelsVisible::LevelNames)
        .def("StaticClass", &USeqAct_WaitForLevelsVisible::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &USeqAct_WaitForLevelsVisible::eventActivated)
        .def("CheckLevelsVisible", &USeqAct_WaitForLevelsVisible::CheckLevelsVisible)
          ;
}