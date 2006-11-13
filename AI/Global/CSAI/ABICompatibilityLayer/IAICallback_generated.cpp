// *** This is a generated file; if you want to change it, please change CSAIInterfaces.dll, which is the reference
// 
// This file was generated by ABICCodeGenerator, by Hugh Perkins hughperkins@gmail.com http://manageddreams.com
// 
AICALLBACK_API float IAICallback_GetMetalStorage( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMetalStorage(   );
}


AICALLBACK_API float IAICallback_GetEnergy( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetEnergy(   );
}


AICALLBACK_API float IAICallback_GetEnergyIncome( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetEnergyIncome(   );
}


AICALLBACK_API float IAICallback_GetEnergyUsage( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetEnergyUsage(   );
}


AICALLBACK_API float IAICallback_GetEnergyStorage( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetEnergyStorage(   );
}


AICALLBACK_API float IAICallback_GetFeatureHealth( const IAICallback *self, int feature )
{
   return ( ( IAICallback *)self )->GetFeatureHealth( feature  );
}


AICALLBACK_API float IAICallback_GetFeatureReclaimLeft( const IAICallback *self, int feature )
{
   return ( ( IAICallback *)self )->GetFeatureReclaimLeft( feature  );
}


AICALLBACK_API int IAICallback_GetNumUnitDefs( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetNumUnitDefs(   );
}


AICALLBACK_API float IAICallback_GetUnitDefRadius( const IAICallback *self, int def )
{
   return ( ( IAICallback *)self )->GetUnitDefRadius( def  );
}


AICALLBACK_API float IAICallback_GetUnitDefHeight( const IAICallback *self, int def )
{
   return ( ( IAICallback *)self )->GetUnitDefHeight( def  );
}


AICALLBACK_API void IAICallback_SendTextMsg( const IAICallback *self, char * text, int priority )
{
   ( ( IAICallback *)self )->SendTextMsg( text, priority  );
}


AICALLBACK_API const UnitDef * IAICallback_GetUnitDef( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitDef( unitid  );
}


AICALLBACK_API int IAICallback_CreateGroup( const IAICallback *self, char * dll, int aiNumber )
{
   return ( ( IAICallback *)self )->CreateGroup( dll, aiNumber  );
}


AICALLBACK_API void IAICallback_EraseGroup( const IAICallback *self, int groupid )
{
   ( ( IAICallback *)self )->EraseGroup( groupid  );
}


AICALLBACK_API const char * IAICallback_GetModName( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetModName(   );
}


AICALLBACK_API const char * IAICallback_GetMapName( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMapName(   );
}


AICALLBACK_API void IAICallback_SetFigureColor( const IAICallback *self, int group, float red, float green, float blue, float alpha )
{
   ( ( IAICallback *)self )->SetFigureColor( group, red, green, blue, alpha  );
}


AICALLBACK_API void IAICallback_DeleteFigureGroup( const IAICallback *self, int group )
{
   ( ( IAICallback *)self )->DeleteFigureGroup( group  );
}


AICALLBACK_API int IAICallback_GetCurrentFrame( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetCurrentFrame(   );
}


AICALLBACK_API int IAICallback_GetMyTeam( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMyTeam(   );
}


AICALLBACK_API int IAICallback_GetMyAllyTeam( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMyAllyTeam(   );
}


AICALLBACK_API int IAICallback_GetPlayerTeam( const IAICallback *self, int player )
{
   return ( ( IAICallback *)self )->GetPlayerTeam( player  );
}


AICALLBACK_API bool IAICallback_AddUnitToGroup( const IAICallback *self, int unitid, int groupid )
{
   return ( ( IAICallback *)self )->AddUnitToGroup( unitid, groupid  );
}


AICALLBACK_API bool IAICallback_RemoveUnitFromGroup( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->RemoveUnitFromGroup( unitid  );
}


AICALLBACK_API int IAICallback_GetUnitGroup( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitGroup( unitid  );
}


AICALLBACK_API int IAICallback_GetUnitAiHint( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitAiHint( unitid  );
}


AICALLBACK_API int IAICallback_GetUnitTeam( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitTeam( unitid  );
}


AICALLBACK_API int IAICallback_GetUnitAllyTeam( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitAllyTeam( unitid  );
}


AICALLBACK_API float IAICallback_GetUnitHealth( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitHealth( unitid  );
}


AICALLBACK_API float IAICallback_GetUnitMaxHealth( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitMaxHealth( unitid  );
}


AICALLBACK_API float IAICallback_GetUnitSpeed( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitSpeed( unitid  );
}


AICALLBACK_API float IAICallback_GetUnitPower( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitPower( unitid  );
}


AICALLBACK_API float IAICallback_GetUnitExperience( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitExperience( unitid  );
}


AICALLBACK_API float IAICallback_GetUnitMaxRange( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetUnitMaxRange( unitid  );
}


AICALLBACK_API bool IAICallback_IsUnitActivated( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->IsUnitActivated( unitid  );
}


AICALLBACK_API bool IAICallback_UnitBeingBuilt( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->UnitBeingBuilt( unitid  );
}


AICALLBACK_API int IAICallback_GetBuildingFacing( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->GetBuildingFacing( unitid  );
}


AICALLBACK_API bool IAICallback_IsUnitCloaked( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->IsUnitCloaked( unitid  );
}


AICALLBACK_API bool IAICallback_IsUnitParalyzed( const IAICallback *self, int unitid )
{
   return ( ( IAICallback *)self )->IsUnitParalyzed( unitid  );
}


AICALLBACK_API int IAICallback_GetMapWidth( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMapWidth(   );
}


AICALLBACK_API int IAICallback_GetMapHeight( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMapHeight(   );
}


AICALLBACK_API float IAICallback_GetMaxMetal( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMaxMetal(   );
}


AICALLBACK_API float IAICallback_GetExtractorRadius( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetExtractorRadius(   );
}


AICALLBACK_API float IAICallback_GetMinWind( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMinWind(   );
}


AICALLBACK_API float IAICallback_GetMaxWind( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMaxWind(   );
}


AICALLBACK_API float IAICallback_GetTidalStrength( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetTidalStrength(   );
}


AICALLBACK_API float IAICallback_GetGravity( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetGravity(   );
}


AICALLBACK_API float IAICallback_GetElevation( const IAICallback *self, float x, float z )
{
   return ( ( IAICallback *)self )->GetElevation( x, z  );
}


AICALLBACK_API float IAICallback_GetMetal( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMetal(   );
}


AICALLBACK_API float IAICallback_GetMetalIncome( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMetalIncome(   );
}


AICALLBACK_API float IAICallback_GetMetalUsage( const IAICallback *self )
{
   return ( ( IAICallback *)self )->GetMetalUsage(   );
}


