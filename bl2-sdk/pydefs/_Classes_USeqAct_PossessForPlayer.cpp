#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PossessForPlayer()
{
    class_< USeqAct_PossessForPlayer, bases< USequenceAction >  , boost::noncopyable>("USeqAct_PossessForPlayer", no_init)
        .def("StaticClass", &USeqAct_PossessForPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}