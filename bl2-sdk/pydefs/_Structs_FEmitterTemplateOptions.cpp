#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEmitterTemplateOptions()
{
    class_< FEmitterTemplateOptions >("FEmitterTemplateOptions", no_init)
        .def_readwrite("DefaultTemplate", &FEmitterTemplateOptions::DefaultTemplate)
        .def_readwrite("CensoredTemplateAlternative", &FEmitterTemplateOptions::CensoredTemplateAlternative)
  ;
}