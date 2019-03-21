#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_PerchRandomLoop()
{
    class_< USpecialMove_PerchRandomLoop, bases< USpecialMove_PerchLoop >  , boost::noncopyable>("USpecialMove_PerchRandomLoop", no_init)
        .def_readwrite("RandomList", &USpecialMove_PerchRandomLoop::RandomList)
        .def("StaticClass", &USpecialMove_PerchRandomLoop::StaticClass, return_value_policy< reference_existing_object >())
        .def("Contains", &USpecialMove_PerchRandomLoop::Contains)
        .def("GetSMDToPlay", &USpecialMove_PerchRandomLoop::GetSMDToPlay, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}