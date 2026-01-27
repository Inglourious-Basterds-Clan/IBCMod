class CfgRespawnTemplates
{
    // Class used in respawnTemplates entry
    class GVAR(oneLife) {
        displayName = CSTRING(DisplayName_OneLife);
        onPlayerKilled = QFUNC(onPlayerKilledOneLife);
        onPlayerRespawn = QFUNC(onPlayerRespawnOneLife);
        respawnDelay = 1e10;
        respawnOnStart = -1;
        respawnButton = 0;
        respawnDialog = 0;
        respawnTypes[] = {3};
        isCall = 1;
    };
};
