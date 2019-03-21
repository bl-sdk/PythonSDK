#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_HasValidSaveGame()
{
    class_< USeqCond_HasValidSaveGame, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_HasValidSaveGame", no_init)
        .def("StaticClass", &USeqCond_HasValidSaveGame::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}