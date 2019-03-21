#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PrepareMapChange()
{
    class_< USeqAct_PrepareMapChange, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_PrepareMapChange", no_init)
        .def_readwrite("MainLevelName", &USeqAct_PrepareMapChange::MainLevelName)
        .def_readwrite("InitiallyLoadedSecondaryLevelNames", &USeqAct_PrepareMapChange::InitiallyLoadedSecondaryLevelNames)
        .def("StaticClass", &USeqAct_PrepareMapChange::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetSavedLevels", &USeqAct_PrepareMapChange::SetSavedLevels)
        .staticmethod("StaticClass")
  ;
}