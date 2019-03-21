#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_InterpPawn()
{
    class_< UWillowSeqAct_InterpPawn, bases< USeqAct_Latent >  , boost::noncopyable>("UWillowSeqAct_InterpPawn", no_init)
        .def_readwrite("InterpSpeed", &UWillowSeqAct_InterpPawn::InterpSpeed)
        .def_readwrite("Goal", &UWillowSeqAct_InterpPawn::Goal)
        .def("StaticClass", &UWillowSeqAct_InterpPawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}