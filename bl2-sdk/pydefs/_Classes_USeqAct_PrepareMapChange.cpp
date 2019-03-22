#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PrepareMapChange(py::module &m)
{
    py::class_< USeqAct_PrepareMapChange,  USeqAct_Latent   >(m, "USeqAct_PrepareMapChange")
        .def_readwrite("MainLevelName", &USeqAct_PrepareMapChange::MainLevelName)
        .def_readwrite("InitiallyLoadedSecondaryLevelNames", &USeqAct_PrepareMapChange::InitiallyLoadedSecondaryLevelNames)
        .def("StaticClass", &USeqAct_PrepareMapChange::StaticClass, py::return_value_policy::reference)
        .def("SetSavedLevels", &USeqAct_PrepareMapChange::SetSavedLevels)
          ;
}