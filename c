[0;1;32m●[0m neo4j.service - Neo4j Graph Database
     Loaded: loaded (/lib/systemd/system/neo4j.service; disabled; vendor preset: enabled)
     Active: [0;1;32mactive (running)[0m since Tue 2024-07-16 16:41:20 CST; 1s ago
   Main PID: 6035 (java)
      Tasks: 31 (limit: 1917)
     Memory: 142.3M
        CPU: 2.395s
     CGroup: /system.slice/neo4j.service
             ├─6035 /usr/bin/java -Xmx128m -classpath "/usr/share/neo4j/lib/*:/usr/share/neo4j/etc:/usr/share/neo4j/repo/*" -Dapp.name=neo4j -Dapp.pid=6035 -Dapp.repo=/usr/share/neo4j/repo -Dapp.home=/usr/share/neo4j -Dbasedir=/usr/share/neo4j org.neo4j.server.startup.Neo4jCommand console
             └─6053 /usr/lib/jvm/java-11-openjdk-amd64/bin/java -cp "/var/lib/neo4j/plugins/*:/etc/neo4j/*:/usr/share/neo4j/lib/*" -XX:+UseG1GC -XX:-OmitStackTraceInFastThrow -XX:+AlwaysPreTouch -XX:+UnlockExperimentalVMOptions -XX:+TrustFinalNonStaticFields -XX:+DisableExplicitGC -XX:MaxInlineLevel=15 -XX:-UseBiasedLocking -Djdk.nio.maxCachedBufferSize=262144 -Dio.netty.tryReflectionSetAccessible=true -Djdk.tls.ephemeralDHKeySize=2048 -Djdk.tls.rejectClientInitiatedRenegotiation=true -XX:FlightRecorderOptions=stackdepth=256 -XX:+UnlockDiagnosticVMOptions -XX:+DebugNonSafepoints -Dlog4j2.disable.jmx=true -Dfile.encoding=UTF-8 org.neo4j.server.CommunityEntryPoint --home-dir=/var/lib/neo4j --config-dir=/etc/neo4j

Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: home:         /var/lib/neo4j
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: config:       /etc/neo4j
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: logs:         /var/log/neo4j
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: plugins:      /var/lib/neo4j/plugins
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: import:       /var/lib/neo4j/import
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: data:         /var/lib/neo4j/data
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: certificates: /var/lib/neo4j/certificates
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: licenses:     /var/lib/neo4j/licenses
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: run:          /var/lib/neo4j/run
Jul 16 16:41:21 iZ2zeaoq83anvoi7fz3rf4Z neo4j[6035]: Starting Neo4j.
