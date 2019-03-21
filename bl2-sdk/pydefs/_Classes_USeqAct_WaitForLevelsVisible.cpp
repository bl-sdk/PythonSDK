#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_WaitForLevelsVisible()
{
    class_< USeqAct_WaitForLevelsVisible, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_WaitForLevelsVisible", no_init)
        .def_readwrite("LevelNames", &USeqAct_WaitForLevelsVisible::LevelNames)
        .def("StaticClass", &USeqAct_WaitForLevelsVisible::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &USeqAct_WaitForLevelsVisible::eventActivated)
        .def("CheckLevelsVisible", &USeqAct_WaitForLevelsVisible::CheckLevelsVisible)
        .staticmethod("StaticClass")
  ;
}