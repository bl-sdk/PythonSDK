#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumVictory()
{
    class_< UWillowSeqAct_ColiseumVictory, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumVictory", no_init)
        .def("StaticClass", &UWillowSeqAct_ColiseumVictory::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumVictory::eventActivated)
        .staticmethod("StaticClass")
  ;
}