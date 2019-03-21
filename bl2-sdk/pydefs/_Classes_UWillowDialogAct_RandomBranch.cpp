#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_RandomBranch()
{
    class_< UWillowDialogAct_RandomBranch, bases< UGearboxDialogAction >  , boost::noncopyable>("UWillowDialogAct_RandomBranch", no_init)
        .def_readwrite("Chances", &UWillowDialogAct_RandomBranch::Chances)
        .def_readwrite("QuietTimeMin", &UWillowDialogAct_RandomBranch::QuietTimeMin)
        .def_readwrite("QuietTimeMax", &UWillowDialogAct_RandomBranch::QuietTimeMax)
        .def_readwrite("Mode", &UWillowDialogAct_RandomBranch::Mode)
        .def_readwrite("AvoidRepeatingLastNPlayed", &UWillowDialogAct_RandomBranch::AvoidRepeatingLastNPlayed)
        .def_readwrite("NextFireTime", &UWillowDialogAct_RandomBranch::NextFireTime)
        .def_readwrite("DisableIndices", &UWillowDialogAct_RandomBranch::DisableIndices)
        .def("StaticClass", &UWillowDialogAct_RandomBranch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UWillowDialogAct_RandomBranch::eventActivate)
        .staticmethod("StaticClass")
  ;
}