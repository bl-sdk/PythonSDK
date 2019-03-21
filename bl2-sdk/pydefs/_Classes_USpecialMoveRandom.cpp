#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMoveRandom()
{
    class_< USpecialMoveRandom, bases< USpecialMoveDefinition >  , boost::noncopyable>("USpecialMoveRandom", no_init)
        .def_readwrite("RandomList", &USpecialMoveRandom::RandomList)
        .def("StaticClass", &USpecialMoveRandom::StaticClass, return_value_policy< reference_existing_object >())
        .def("Contains", &USpecialMoveRandom::Contains)
        .def("GetSMDToPlay", &USpecialMoveRandom::GetSMDToPlay, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}