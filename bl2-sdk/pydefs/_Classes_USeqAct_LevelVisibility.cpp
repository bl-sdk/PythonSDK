#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_LevelVisibility()
{
    class_< USeqAct_LevelVisibility, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_LevelVisibility", no_init)
        .def_readwrite("Level", &USeqAct_LevelVisibility::Level)
        .def_readwrite("LevelName", &USeqAct_LevelVisibility::LevelName)
        .def("StaticClass", &USeqAct_LevelVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}