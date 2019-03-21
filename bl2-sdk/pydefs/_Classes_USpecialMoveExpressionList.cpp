#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMoveExpressionList()
{
    class_< USpecialMoveExpressionList, bases< USpecialMoveDefinition >  , boost::noncopyable>("USpecialMoveExpressionList", no_init)
        .def_readwrite("SpecialMoveList", &USpecialMoveExpressionList::SpecialMoveList)
        .def("StaticClass", &USpecialMoveExpressionList::StaticClass, return_value_policy< reference_existing_object >())
        .def("Contains", &USpecialMoveExpressionList::Contains)
        .def("GetSMDToPlay", &USpecialMoveExpressionList::GetSMDToPlay, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}