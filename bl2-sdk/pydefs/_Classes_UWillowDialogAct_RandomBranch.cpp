#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_RandomBranch(py::module &m)
{
    py::class_< UWillowDialogAct_RandomBranch,  UGearboxDialogAction   >(m, "UWillowDialogAct_RandomBranch")
        .def_readwrite("Chances", &UWillowDialogAct_RandomBranch::Chances)
        .def_readwrite("QuietTimeMin", &UWillowDialogAct_RandomBranch::QuietTimeMin)
        .def_readwrite("QuietTimeMax", &UWillowDialogAct_RandomBranch::QuietTimeMax)
        .def_readwrite("Mode", &UWillowDialogAct_RandomBranch::Mode)
        .def_readwrite("AvoidRepeatingLastNPlayed", &UWillowDialogAct_RandomBranch::AvoidRepeatingLastNPlayed)
        .def_readwrite("NextFireTime", &UWillowDialogAct_RandomBranch::NextFireTime)
        .def_readwrite("DisableIndices", &UWillowDialogAct_RandomBranch::DisableIndices)
        .def("StaticClass", &UWillowDialogAct_RandomBranch::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UWillowDialogAct_RandomBranch::eventActivate)
          ;
}