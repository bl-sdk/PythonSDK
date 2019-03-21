#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Possess()
{
    class_< USeqAct_Possess, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Possess", no_init)
        .def_readwrite("PawnToPossess", &USeqAct_Possess::PawnToPossess)
        .def("StaticClass", &USeqAct_Possess::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}